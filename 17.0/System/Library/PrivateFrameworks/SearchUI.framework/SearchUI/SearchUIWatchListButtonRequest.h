@class NSString;

@interface SearchUIWatchListButtonRequest : NSObject

@property (retain) NSString *identifier;
@property int type;
@property BOOL isHorizontallySrollingStyle;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
