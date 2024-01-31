@class NSNumber, NSString;

@interface DNDSConfigurationRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) NSNumber *applicationConfigurationType;
@property (readonly, copy, nonatomic) NSNumber *senderConfigurationType;
@property (readonly, copy, nonatomic) NSNumber *suppressionType;
@property (readonly, copy, nonatomic) NSNumber *suppressionMode;
@property (readonly, copy, nonatomic) NSNumber *minimumBreakthroughUrgency;
@property (readonly, copy, nonatomic) NSNumber *hideApplicationBadges;
@property (readonly, copy, nonatomic) NSNumber *compatibilityVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;
+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;

- (id)init;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)_initWithApplicationConfigurationType:(id)a0 senderConfigurationType:(id)a1 suppressionType:(id)a2 suppressionMode:(id)a3 minimumBreakthroughUrgency:(id)a4 hideApplicationBadges:(id)a5 compatibilityVersion:(id)a6;
- (id)_initWithRecord:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
