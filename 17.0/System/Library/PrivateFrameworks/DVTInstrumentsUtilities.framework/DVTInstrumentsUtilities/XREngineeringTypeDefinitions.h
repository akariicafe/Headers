@class NSString, NSDate;

@interface XREngineeringTypeDefinitions : NSObject <XRXMLParserDelegate> {
    id /* block */ _etypeDefHandler;
}

@property (readonly, nonatomic) NSDate *lastModificationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)announceUsageOfEnumString:(id)a0 context:(id)a1;
+ (id)descriptionForImplClass:(unsigned char)a0;
+ (id)implementationClassByEngineeringTypeMnemonic;
+ (BOOL)registerEngineeringTypes:(id)a0;

@end
