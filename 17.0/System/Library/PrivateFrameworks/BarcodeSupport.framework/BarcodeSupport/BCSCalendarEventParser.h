@class NSString;

@interface BCSCalendarEventParser : NSObject <BCSDataParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseString:(id)a0;
+ (id)_validatedICSString:(id)a0;


@end
