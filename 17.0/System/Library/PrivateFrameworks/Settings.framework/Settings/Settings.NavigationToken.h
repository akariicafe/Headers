@interface Settings.NavigationToken : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ navigationPath;
    void /* unknown type, empty encoding */ iconData;
    void /* unknown type, empty encoding */ iconUTType;
    void /* unknown type, empty encoding */ hasPushedContent;
    void /* unknown type, empty encoding */ isRoot;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
