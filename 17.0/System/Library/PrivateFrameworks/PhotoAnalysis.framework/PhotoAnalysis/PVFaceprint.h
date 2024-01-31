@class NSData;

@interface PVFaceprint : PVObject

@property (nonatomic) long long faceprintVersion;
@property (retain, nonatomic) NSData *faceprintData;

+ (id)faceprintWithFaceprintData:(id)a0 faceprintVersion:(long long)a1;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setPropertiesFrom:(id)a0;
- (BOOL)getDistance:(float *)a0 toOtherFaceprint:(id)a1 error:(id *)a2;

@end
