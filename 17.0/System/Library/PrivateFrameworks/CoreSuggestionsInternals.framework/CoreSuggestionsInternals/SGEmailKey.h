@class NSString;

@interface SGEmailKey : SGMessageKey <SGEntityKey>

@property (readonly) NSString *messageId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportedEntityType:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (id)initWithSource:(id)a0 messageId:(id)a1;
- (id)initWithMailMessageKey:(id)a0;
- (BOOL)isEqualToEmailKey:(id)a0;
- (id)toMailMessageKey;

@end
