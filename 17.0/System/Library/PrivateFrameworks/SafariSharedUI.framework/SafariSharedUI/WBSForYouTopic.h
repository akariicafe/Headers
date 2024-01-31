@class NSString, NSArray, NSDate;

@interface WBSForYouTopic : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *associatedTopics;
@property (readonly, nonatomic) NSDate *relevancyDate;
@property (nonatomic) unsigned long long source;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 identifier:(id)a1 relevancyDate:(id)a2 source:(unsigned long long)a3;

@end
