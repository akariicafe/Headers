@class NSString, NSArray, NSDictionary, NSError;

@interface IMXMLReparserContext : NSObject

@property (readonly, retain) NSString *_inContent;
@property (readonly, retain, nonatomic) NSArray *attributesToPreserve;
@property (readonly, retain, nonatomic) NSDictionary *attributesToMerge;
@property (readonly, retain, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSString *outContent;

- (void)dealloc;
- (void)_setOutContent:(id)a0 error:(id)a1;
- (id)initWithContent:(id)a0 attributesToPreserve:(id)a1 attributesToMerge:(id)a2;

@end
