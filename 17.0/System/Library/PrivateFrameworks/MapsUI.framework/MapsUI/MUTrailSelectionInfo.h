@class NSString;

@interface MUTrailSelectionInfo : NSObject

@property (nonatomic) unsigned long long trailID;
@property (copy, nonatomic) NSString *trailName;

- (void).cxx_destruct;
- (id)initWithTrailID:(unsigned long long)a0 trailName:(id)a1;

@end
