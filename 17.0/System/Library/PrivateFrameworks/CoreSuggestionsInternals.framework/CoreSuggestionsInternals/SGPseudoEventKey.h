@class NSString;

@interface SGPseudoEventKey : NSObject <SGEntityKey> {
    NSString *_serialized;
}

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *groupId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportedEntityType:(long long)a0;

- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)alternativeKeysForEventKitQuery;
- (id)initWithGloballyUniqueId:(id)a0;
- (id)initWithSerialized:(id)a0;
- (BOOL)isDropoff;
- (BOOL)isEqualToPseudoEventKey:(id)a0;
- (id)keyForEventKitQuery;

@end
