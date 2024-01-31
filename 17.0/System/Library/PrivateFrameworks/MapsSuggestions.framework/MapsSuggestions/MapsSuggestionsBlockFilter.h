@class NSString;

@interface MapsSuggestionsBlockFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter> {
    NSString *_name;
    id /* block */ _block;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;
+ (id)filterWithBlock:(id /* block */)a0;

@end
