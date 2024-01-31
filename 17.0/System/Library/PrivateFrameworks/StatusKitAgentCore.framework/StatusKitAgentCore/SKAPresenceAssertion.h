@class SKPresenceOptions, NSString, SKPresencePayload, NSObject;
@protocol OS_os_activity;

@interface SKAPresenceAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (readonly, copy, nonatomic) NSString *presenceIdentifier;
@property (readonly, copy, nonatomic) SKPresenceOptions *options;
@property (copy, nonatomic) SKPresencePayload *payload;

+ (id)logger;

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPresenceIdentifier:(id)a0 options:(id)a1 payload:(id)a2;
- (BOOL)isEqualToPresenceAssertion:(id)a0;

@end
