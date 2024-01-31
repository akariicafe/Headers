@class NSString, NSDateComponents, NSDate;

@interface ATXTimeMarble : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateComponents *dateComponents;
@property (readonly, copy, nonatomic) NSString *colorName;
@property (readonly, copy, nonatomic) NSString *symbolName;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDate *date;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSymbolName:(id)a0 colorName:(id)a1 dateComponents:(id)a2 title:(id)a3;

@end
