@class _CDRateLimiter;

@interface _CDInteractionPolicy : NSObject

@property (retain) _CDRateLimiter *rateLimiter;
@property unsigned long long lifespanInSeconds;
@property unsigned long long maxNumberStored;
@property unsigned long long timeResolutionInSeconds;
@property unsigned long long maxNumberOfRecipients;
@property unsigned long long maxNumberOfKeywords;
@property unsigned long long maxNumberOfAttachments;

+ (id)policyFromDictionary:(id)a0;
+ (id)defaultPolicy;
+ (unsigned long long)defaultLifespan;
+ (unsigned long long)defaultMaxNumberOfAttachments;
+ (unsigned long long)defaultMaxNumberOfKeywords;
+ (unsigned long long)defaultMaxNumberOfRecipients;
+ (unsigned long long)defaultMaxNumberStored;
+ (id)defaultPolicyForCalls;
+ (id)defaultPolicyForEmail;
+ (id)defaultPolicyForMeetings;
+ (id)defaultPolicyForMessages;
+ (unsigned long long)defaultTimeResolutionInSeconds;
+ (id)policyWithRateLimiter:(id)a0 lifespanInSeconds:(unsigned long long)a1 maxNumberStored:(unsigned long long)a2 timeResolutionInSeconds:(unsigned long long)a3 maxNumberOfRecipients:(unsigned long long)a4 maxNumberOfKeywords:(unsigned long long)a5 maxNumberOfAttachments:(unsigned long long)a6;
+ (id)specialPolicyForFirstPartyApps;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRateLimiter:(id)a0 lifespanInSeconds:(unsigned long long)a1 maxNumberStored:(unsigned long long)a2 timeResolutionInSeconds:(unsigned long long)a3 maxNumberOfRecipients:(unsigned long long)a4 maxNumberOfKeywords:(unsigned long long)a5 maxNumberOfAttachments:(unsigned long long)a6;

@end
