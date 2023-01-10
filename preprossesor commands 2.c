#define COUNTRY India
#ifCOUNTRY==pakistan
printf("Pakistani Ruppes");
#elif COUNTRY==bangkadesh
printf("Taka");
#elif COUNTRY==Nepal
printf("Nepali Ruppes");
#else
printf("Indian Ruppes");
#endif
