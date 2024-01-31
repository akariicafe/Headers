@interface SNPlistUtils : NSObject

+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })CMTimeRangeFromPlist:(id)a0;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })CMTimeFromPlist:(id)a0;
+ (BOOL)checkAllItemsArePlistSerializableInCollection:(id)a0;
+ (id)plistArrayFromItemsInSerializableCollection:(id)a0 error:(id *)a1;
+ (id)plistFromCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
+ (id)plistFromCMTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
+ (id)safePlistArrayFromItemsInSerializableCollection:(id)a0 error:(id *)a1;
+ (BOOL)validateAllItemsArePlistSerializableInCollection:(id)a0 error:(id *)a1;

- (id)init;

@end
