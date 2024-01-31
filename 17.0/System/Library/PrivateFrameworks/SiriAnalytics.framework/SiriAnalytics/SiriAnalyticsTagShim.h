@class NSString;

@interface SiriAnalyticsTagShim : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ underlying;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithConditionType:(int)a0 componentId:(id)a1 componentName:(int)a2 joined:(BOOL)a3;
- (id)initWithConditionType:(int)a0 end:(unsigned long long)a1;
- (id)initWithConditionType:(int)a0 requestId:(id)a1 joined:(BOOL)a2;
- (id)initWithConditionType:(int)a0 start:(unsigned long long)a1;
- (id)initWithConditionType:(int)a0 start:(unsigned long long)a1 end:(unsigned long long)a2;
- (id)initWithConditionTypeAffectingEntireClock:(int)a0;

@end
