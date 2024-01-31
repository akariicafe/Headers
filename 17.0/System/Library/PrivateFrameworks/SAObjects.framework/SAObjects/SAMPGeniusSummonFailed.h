@class NSString;

@interface SAMPGeniusSummonFailed : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)geniusSummonFailed;
+ (id)geniusSummonFailedWithDictionary:(id)a0 context:(id)a1;
+ (id)geniusSummonFailedWithErrorCode:(long long)a0;
+ (id)geniusSummonFailedWithReason:(id)a0;

- (id)initWithReason:(id)a0;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)initWithErrorCode:(long long)a0;

@end
