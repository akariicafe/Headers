@interface GEOPointUtility : NSObject

+ (id)compressedZilchDataFromPoints:(void *)a0 fromPointIndex:(unsigned long long)a1 pointCount:(unsigned long long)a2;
+ (void *)controlPoints:(id)a0 usesZilch:(BOOL)a1;
+ (id)debugDescriptionForCompressedZilchData:(id)a0;
+ (struct { double x0; double x1; double x2; })pointAt:(unsigned long long)a0 pointData:(id)a1 usesZilch:(BOOL)a2;
+ (unsigned long long)pointCount:(id)a0 usesZilch:(BOOL)a1;
+ (id)subdataFromPointData:(id)a0 fromPointIndex:(unsigned long long)a1 usesZilch:(BOOL)a2;
+ (id)unpackBasicPoints:(id)a0;
+ (id)unpackPoints:(id)a0 usesZilch:(BOOL)a1;
+ (id)unpackZilchPoints:(id)a0;

@end
