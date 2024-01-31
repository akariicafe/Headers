@class NSString, NSSet;

@interface VUITVSeriesManagedObject : NSManagedObject

@property (copy, nonatomic) NSString *canonicalID;
@property (copy, nonatomic) NSString *adamID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSSet *episodes;
@property (retain, nonatomic) NSSet *imageInfos;
@property (retain, nonatomic) NSSet *seasons;

@end
