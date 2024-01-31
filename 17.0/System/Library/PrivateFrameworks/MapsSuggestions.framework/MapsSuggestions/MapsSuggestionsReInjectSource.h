@class NSString;
@protocol MapsSuggestionsSourceDelegate;

@interface MapsSuggestionsReInjectSource : MapsSuggestionsBaseSource <MapsSuggestionsSource>

@property (retain, nonatomic) NSString *path;
@property (weak, nonatomic) id<MapsSuggestionsSourceDelegate> delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_entriesFromMultilineString:(id)a0;
+ (BOOL)isEnabled;
+ (unsigned long long)disposition;

@end
