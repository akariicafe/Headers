@interface CRFormUtilities : NSObject

+ (id)debugDescriptionForField:(id)a0;
+ (id)detectedFieldRegionsInDocument:(id)a0 excludingFields:(id)a1 updateExcludedFields:(BOOL)a2;
+ (BOOL)isRegion:(id)a0 verticallyAlignedWithRegionBelow:(id)a1 maxRelativeDistance:(double)a2;
+ (id)proposedFieldForPoint:(struct CGPoint { double x0; double x1; })a0 inDocument:(id)a1 existingFields:(id)a2;
+ (BOOL)stringEndsWithColon:(id)a0;

@end
