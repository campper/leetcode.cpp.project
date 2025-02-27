import csl from "../csl.json";

interface Author {
  family: string;
  given: string;
}

interface CiteEntry {
  id: string;
  abstract: string;
  accessed: { "date-parts": number[][] };
  author: Author[];
  "citation-key": string;
  DOI: string;
  issued: { "date-parts": number[][] };
  number: string;
  publisher: string;
  source: string;
  title: string;
  type: string;
  URL: string;
}

type CiteEntryOrderMap = Record<string, number>;

const citeMap = (csl as CiteEntry[]).reduce(
  (map: Record<string, CiteEntry>, item: CiteEntry) => {
    map[item.id] = item;
    return map;
  },
  {}
);

const citeOrderMap = {} as CiteEntryOrderMap;

const getMaxOrder = (): number => {
  return Math.max(0, ...Object.values(citeOrderMap));
};

const addCitation = (citationId: string) => {
  if (!citeOrderMap[citationId]) {
    citeOrderMap[citationId] = getMaxOrder() + 1;
  }
};

const getCitationIndex = (citationId: string): number => {
  return citeOrderMap[citationId];
};

export { CiteEntry, citeMap, citeOrderMap, getMaxOrder, addCitation, getCitationIndex };
