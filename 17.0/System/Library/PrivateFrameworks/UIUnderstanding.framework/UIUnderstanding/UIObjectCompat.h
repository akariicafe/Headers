@class NSString, NSArray;

@interface UIObjectCompat : NSObject {
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ children;
}

@property (nonatomic) void /* unknown type, empty encoding */ label;
@property (nonatomic) void /* unknown type, empty encoding */ confidence;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) void /* unknown type, empty encoding */ boundingBox;
@property (nonatomic, copy) NSArray *children;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ clickable;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLabel:(long long)a0 confidence:(double)a1 text:(id)a2 boundingBox:(id)a3 children:(id)a4 clickable:(BOOL)a5;

@end
