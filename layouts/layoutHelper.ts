import type { CSSProperties } from "vue";

/**
 * Resolve urls from frontmatter and append with the base url
 */

export function resolveAssetUrl(url: string){
    if(url.startsWith("/")) return import.meta.env.BASE_URL + url.slice(1);
    return url;
}

export function handleBackground(
    background?: string,
    dim = false,
    gradientOption: string = 'linear-gradient(#0005,#0008)'
): CSSProperties {
    const isColor = 
    background && ["#", "rgb", "hsl"].some((v) => background.indexOf(v) === 0);

    const style = {
        background: isColor ? background : undefined,
        color: background && !isColor ? "white" : undefined,
        backgroundImage: isColor
            ? undefined : background
            ? dim
                ? `${gradientOption}, url(${resolveAssetUrl(background)})`
                : `url(${resolveAssetUrl(background)})`
            : undefined,
        backgroundRepeat: "no-repeat",
        backgroundSize: "100% 300px",
        backgroundPosition: "center",
    };
    console.log(style);

    if(!style.background) delete style.background;
    
    return style;
 }