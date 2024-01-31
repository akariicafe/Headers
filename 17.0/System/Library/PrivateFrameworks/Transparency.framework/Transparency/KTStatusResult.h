@class NSArray, NSDictionary, NSDate;

@interface KTStatusResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long optIn;
@property unsigned long long accountStatus;
@property unsigned long long systemStatus;
@property unsigned long long selfStatus;
@property BOOL optInState;
@property (retain) NSArray *recentFailedEventIds;
@property (retain) NSDate *expectedSelfResolutionDate;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
