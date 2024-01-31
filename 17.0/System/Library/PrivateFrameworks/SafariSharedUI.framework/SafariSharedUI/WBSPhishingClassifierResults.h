@class NSString, NSDictionary, NSURL, UIImage;

@interface WBSPhishingClassifierResults : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) unsigned long long classification;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 image:(id)a1 classification:(unsigned long long)a2 identifier:(id)a3 confidence:(float)a4;

@end
