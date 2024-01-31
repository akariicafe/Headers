@class NSString;

@interface CKInboxItemSwift : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ systemImage;
    void /* unknown type, empty encoding */ _accessoryText;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2 systemImage:(id)a3 accessoryText:(id)a4;
- (void)updateWithAccessoryText:(id)a0;

@end
