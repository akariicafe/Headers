@class NSString;

@interface SUCoreDiagPoint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long trackType;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) long long code;
@property (retain, nonatomic) NSString *errorDesc;
@property (nonatomic) long long checkedLayer;
@property (nonatomic) long long checkedCode;
@property (retain, nonatomic) NSString *checkedDomain;
@property (nonatomic) long long checkedIndications;
@property (retain, nonatomic) NSString *previous;
@property (retain, nonatomic) NSString *activity;
@property (retain, nonatomic) NSString *next;
@property (retain, nonatomic) NSString *param;

- (id)typeName;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)_summaryStateEvent;
- (id)_descriptionStandard;
- (id)_summaryStandard;
- (id)initStateEventForFSM:(id)a0 previousState:(id)a1 fsmEvent:(id)a2 nextState:(id)a3 fsmAction:(id)a4 eventInfo:(id)a5;
- (id)description;
- (void).cxx_destruct;
- (id)_descriptionStateEvent;
- (id)initOfType:(long long)a0 fromLocation:(id)a1 forReason:(id)a2 withCode:(long long)a3 withError:(id)a4;
- (id)_initFullySpecified:(long long)a0 fromLocation:(id)a1 forReason:(id)a2 withCode:(long long)a3 withError:(id)a4 previous:(id)a5 next:(id)a6 activity:(id)a7 param:(id)a8;
- (id)initWithCoder:(id)a0;

@end
