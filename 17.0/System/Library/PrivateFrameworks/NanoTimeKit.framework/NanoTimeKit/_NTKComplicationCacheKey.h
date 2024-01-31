@class NSUUID, NTKComplicationVariant, NTKComplication;

@interface _NTKComplicationCacheKey : NSObject <NSCopying>

@property (readonly) NTKComplication *complication;
@property (readonly) NTKComplicationVariant *variant;
@property (readonly) NSUUID *deviceUUID;

+ (id)keyWithVariant:(id)a0 complication:(id)a1 forDevice:(id)a2;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
