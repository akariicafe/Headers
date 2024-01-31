@class NSString, NSAttributedString;

@interface DMCProfileItemDetail : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *detail;
@property (readonly, nonatomic) BOOL isTrusted;
@property (readonly, nonatomic) NSAttributedString *trustText;

+ (id)itemDetailWithTitle:(id)a0 detail:(id)a1;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detail:(id)a1 isTrusted:(BOOL)a2 trustText:(id)a3;

@end
