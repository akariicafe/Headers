@interface Settings.TitlebarConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ imageSymbols;
    void /* unknown type, empty encoding */ imageLabels;
    void /* unknown type, empty encoding */ cloudSyncConfiguration;
    void /* unknown type, empty encoding */ useCloudSyncConfiguration;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
