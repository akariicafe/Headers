@class NSString;

@interface _PSAppSuggestionsMetricsItem : NSObject {
    void /* unknown type, empty encoding */ transportBundleId;
    void /* unknown type, empty encoding */ model;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *transportBundleId;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ rank;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTransportBundleId:(id)a0 model:(id)a1 rank:(unsigned char)a2;

@end
