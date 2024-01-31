@interface KNHyperlinkController : NSObject

+ (BOOL)canProcessHyperlinkURLInRemote:(id)a0;
+ (BOOL)URLContainsKeynoteSpecificHyperlink:(id)a0;
+ (id)displayStringForSlideLink:(long long)a0 url:(id)a1 documentRoot:(id)a2;
+ (long long)hyperlinkTypeFromHyperlinkURL:(id)a0;
+ (BOOL)isExternalHyperlinkURL:(id)a0;
+ (unsigned long long)slideIndexForSlideLink:(id)a0 url:(id)a1;
+ (id)smartFieldForRep:(id)a0 atUnscaledPoint:(struct CGPoint { double x0; double x1; })a1 outRep:(id *)a2;
+ (id)uniqueIdentifierFromHyperlinkURL:(id)a0;

@end
