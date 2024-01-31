@class NSMutableArray;

@interface ATXNotificationsMatchScore : NSObject {
    NSMutableArray *_values;
}

- (void)set:(unsigned long long)a0 value:(id)a1;
- (id)init;
- (void)combine:(id)a0;
- (id /* block */)getAggregationBlockForName:(unsigned long long)a0;
- (id)get:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)dict;

@end
