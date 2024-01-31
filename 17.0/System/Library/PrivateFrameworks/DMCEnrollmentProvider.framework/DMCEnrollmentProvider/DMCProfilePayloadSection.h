@class NSString, NSMutableArray;

@interface DMCProfilePayloadSection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) NSString *sectionFooter;
@property (retain, nonatomic) NSMutableArray *payloadViewModels;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSectionTitle:(id)a0 footer:(id)a1 payloadViewModels:(id)a2;

@end
