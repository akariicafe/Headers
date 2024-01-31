@class NSString;

@interface _ACPluginDBBundle : NSObject <NSSecureCoding> {
    NSString *mFullPath;
    double mInfoPlistModDate;
    double mRsrcModDate;
    struct AudioComponentVector { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<APComponent> *, std::allocator<std::shared_ptr<APComponent>>> { void *__value_; } __end_cap_; BOOL mSorted; } mBundleComponentVector;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPath:(id)a0 infoPlistModDate:(double)a1 rsrcModDate:(double)a2;
- (void)loadAllComponents:(void *)a0;
- (void)scanWithPriority:(int)a0 loadable:(BOOL)a1 infoPlistPath:(id)a2;

@end
