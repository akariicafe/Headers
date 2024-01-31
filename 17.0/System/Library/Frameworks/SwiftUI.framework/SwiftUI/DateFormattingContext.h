@class NSDate;

@interface DateFormattingContext : NSObject

@property (readonly, nonatomic) NSDate *referenceDate;
@property (readonly, nonatomic) BOOL isLuminanceReduced;

- (id)init;
- (id)initWithReferenceDate:(id)a0 isLuminanceReduced:(BOOL)a1;
- (void).cxx_destruct;

@end
