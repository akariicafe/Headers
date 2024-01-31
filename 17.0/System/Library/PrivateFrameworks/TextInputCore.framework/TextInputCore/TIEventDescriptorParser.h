@interface TIEventDescriptorParser : TIDescriptorParser

- (id)init;
- (id)parseBooleanFieldSpecWithName:(id)a0 fromConfig:(id)a1 errors:(id)a2;
- (void)parseEventDescriptor:(id *)a0 andEventSpec:(id *)a1 withName:(id)a2 fromConfig:(id)a3 errors:(id)a4;
- (void)parseEventDescriptors:(id)a0 andEventSpecs:(id)a1 fromConfig:(id)a2 errors:(id)a3;
- (void)parseFieldDescriptor:(id *)a0 andFieldSpec:(id *)a1 withName:(id)a2 fromConfig:(id)a3 errors:(id)a4;
- (id)parseFloatFieldSpecWithName:(id)a0 fromConfig:(id)a1 errors:(id)a2;
- (id)parseIntegerFieldSpecWithName:(id)a0 fromConfig:(id)a1 errors:(id)a2;
- (id)parseStringFieldSpecWithName:(id)a0 fromConfig:(id)a1 errors:(id)a2;

@end
