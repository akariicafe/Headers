@class NSString, UIImage;

@interface _UIDocumentPickerAuxiliaryOption : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) unsigned long long order;
@property (nonatomic, getter=isNewlyAdded) BOOL newlyAdded;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
