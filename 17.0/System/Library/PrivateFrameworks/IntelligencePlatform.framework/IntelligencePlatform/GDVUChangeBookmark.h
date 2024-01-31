@interface GDVUChangeBookmark : NSObject {
    void /* unknown type, empty encoding */ inner;
}

@property (nonatomic, readonly) long long hash;

+ (BOOL)supportsSecureCoding;
+ (id)decodeFromData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)encodeToDataAndReturnError:(id *)a0;

@end
