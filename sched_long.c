int main()
{
  int index, result;
  result = 1;
  while (true)
  {
    result = result * index;
    index = result % index;
  }
  return 0;
}