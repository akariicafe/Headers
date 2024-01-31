@class NSNumber;

@interface ATXChargerPluggedInDuetEvent : ATXDuetEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long chargerPluggedInState;
@property (readonly, nonatomic) NSNumber *adapterType;

- (id)initWithCurrentContextStoreValues;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDKEvent:(id)a0;
- (id)identifier;
- (id)description;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithChargerPluggedInState:(long long)a0 adapterType:(id)a1 startDate:(id)a2 endDate:(id)a3;

@end
