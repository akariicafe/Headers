@class NSString, SDTraceItem;

@interface SDTrace : NSObject {
    SDTraceItem *_items[32];
}

@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) int current;

+ (void)initialize;

- (id)init;
- (long long)addLabel:(id)a0 identifier:(long long)a1 duration:(double)a2 string:(id)a3 data:(id)a4;
- (id)initWithTitle:(id)a0;
- (id)items;
- (id)description;
- (void).cxx_destruct;

@end
