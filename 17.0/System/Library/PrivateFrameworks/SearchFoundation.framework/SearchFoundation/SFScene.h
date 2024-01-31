@class NSDictionary, NSData, NSString;

@interface SFScene : NSObject <SFScene, NSSecureCoding, NSCopying> {
    struct { unsigned char sceneIdentifier : 1; unsigned char sceneType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long sceneIdentifier;
@property (nonatomic) int sceneType;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasSceneType;
- (BOOL)hasSceneIdentifier;

@end
