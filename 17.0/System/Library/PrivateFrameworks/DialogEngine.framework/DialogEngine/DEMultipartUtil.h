@interface DEMultipartUtil : NSObject

+ (id)getBoundaryData;
+ (id)getBoundary;
+ (id)getMessageEnd;
+ (id)getMessageEndData;
+ (id)getPartEndData;

@end
