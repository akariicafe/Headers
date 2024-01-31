@class NSDate;

@interface _HKDataCollectorFlushRequest : NSObject

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithDate:(id)a0 completion:(id /* block */)a1;

@end
