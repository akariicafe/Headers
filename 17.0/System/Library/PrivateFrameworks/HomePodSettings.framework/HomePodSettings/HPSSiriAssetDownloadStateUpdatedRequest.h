@interface HPSSiriAssetDownloadStateUpdatedRequest : COMessageChannelRequest <NSSecureCoding> {
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ uuidstr;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
