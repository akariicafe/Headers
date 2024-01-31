@interface EXReference : NSObject

+ (BOOL)edAreaReferenceFromXmlReference:(id)a0 areaReference:(struct EDAreaReference { int x0; int x1; int x2; int x3; } *)a1;
+ (id)edDiscontinousReferencesFromXmlRanges:(id)a0;
+ (id)edReferenceFromXmlReference:(id)a0;
+ (id)numberToStringBase26:(int)a0;
+ (id)xmlRangesFromDiscontinuousReferences:(id)a0;
+ (id)xmlReferenceFromAreaReference:(struct EDAreaReference { int x0; int x1; int x2; int x3; } *)a0;
+ (id)xmlReferenceFromEDReference:(id)a0;

@end
