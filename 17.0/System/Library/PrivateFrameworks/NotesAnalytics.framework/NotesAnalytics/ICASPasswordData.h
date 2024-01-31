@class NSString, ICASPasswordType, NSNumber;

@interface ICASPasswordData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASPasswordType *passwordType;
@property (readonly, nonatomic) NSNumber *hasHint;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithPasswordType:(id)a0 hasHint:(id)a1;

@end
