@class NSString;

@interface SBSUserNotificationAssetDefinition : NSObject <NSCopying>

@property (class, readonly, copy, nonatomic) NSString *_definitionType;

+ (id)_definitionFromSerializedDefinition:(id)a0;

- (id)build;
- (id)_initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
