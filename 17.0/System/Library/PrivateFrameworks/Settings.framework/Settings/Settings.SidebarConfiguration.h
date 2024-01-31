@interface Settings.SidebarConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ wantsAddButton;
    void /* unknown type, empty encoding */ wantsDeleteButton;
    void /* unknown type, empty encoding */ addButtonEnabled;
    void /* unknown type, empty encoding */ deleteButtonEnabled;
    void /* unknown type, empty encoding */ selection;
    void /* unknown type, empty encoding */ iconSize;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
