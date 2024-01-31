@interface CALocalDisplay : CADisplay

+ (id)displayWithDisplayId:(unsigned int)a0 name:(id)a1 deviceName:(id)a2 update:(id /* block */)a3 timings:(id /* block */)a4;
+ (void)notifyDisplayAdded:(unsigned int)a0;
+ (void)setDisplayLookupBlock:(id /* block */)a0;

- (void)postNotification:(long long)a0;

@end
