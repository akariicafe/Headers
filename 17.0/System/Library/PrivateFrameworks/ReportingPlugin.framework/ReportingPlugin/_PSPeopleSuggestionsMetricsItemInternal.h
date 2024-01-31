@class NSString;

@interface _PSPeopleSuggestionsMetricsItemInternal : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ transportBundleId;
    void /* unknown type, empty encoding */ rank;
    void /* unknown type, empty encoding */ score;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ model;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithId:(id)a0 model:(id)a1 transportBundleId:(id)a2 rank:(unsigned char)a3 score:(double)a4;

@end
