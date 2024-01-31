@class NSString;

@interface SGCuratedEventKey : NSObject <SGEntityKey>

@property (readonly, nonatomic) NSString *externalId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportedEntityType:(long long)a0;

- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithExternalId:(id)a0;
- (id)initWithSerialized:(id)a0;
- (BOOL)isEqualToCuratedEventKey:(id)a0;

@end
